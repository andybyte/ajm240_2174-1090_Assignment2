using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour {

	public Text winner;
	public Text dinner;
	public Rigidbody2D player;
	public Text lives;
	public int intLives;
	public Text kills;
	public int intKills;
	public int speed;
	public AudioSource collisionSound;
	public AudioSource zombieBite;
	public AudioSource youWin;
	public AudioSource youLose;
	private SpriteRenderer playerSprite ;
	private VinylBehavior script;
	private bool keypress;
	private bool contact;
	private bool carrying;
	private Rigidbody2D vinyl;
	private string spriteDirection;



	// Use this for initialization
	void Start () {

		// UI
		winner.text = " ";
		dinner.text = " ";

		// Player elements.
		player = GetComponent<Rigidbody2D>();
		playerSprite = GetComponent<SpriteRenderer> ();
		spriteDirection = "right";

		// Contact with vinyl.
		contact = false;
		carrying = false;

		// Game Stats.
		intLives = 5;
		intKills = 0;

		// Update UI.
		UpdateKills (intKills);
		UpdateLives (intLives);
	}

	void Update () {

		// Movement 
		Vector3 move = new Vector3 (Input.GetAxis ("Horizontal"), Input.GetAxis ("Vertical"), 0.0f);

			// Prevent player from moving off the level..
			if (player.position.x < -9.0f & move.x < 0.0f) {
				move.x = 0.0f;
			} 
			if (player.position.x > 8.9f & move.x > 0.0f) {
				move.x = 0.0f;
			} 
			if (player.position.y > 4.1f & move.y > 0.0f) {
				move.y = 0.0f;
			} 
			if (player.position.y < -3.83f & move.y < 0.0f) {
				move.y = 0.0f;
			}

			transform.position += move * speed * Time.deltaTime;

		// Adjust sprite direction.
		if (Input.GetKeyDown (KeyCode.LeftArrow)) {
			spriteDirection = "left";
			playerSprite.flipX = false;
		} else if (Input.GetKeyDown (KeyCode.RightArrow)) {
			spriteDirection = "right";
			playerSprite.flipX = true;
		}

		// Detect if player is pressing mouse button.
		if (Input.GetKeyDown (KeyCode.Mouse0)) {
			keypress = true;
		}
		if (Input.GetKeyUp (KeyCode.Mouse0)) {
			keypress = false;
		}

		// Detect if player is pressing mouse button and in contact with vinyl. If so change state of vinyl to Carry Mode.
		if (Input.GetKeyDown (KeyCode.Mouse0)) {
			if (contact == true && keypress == true) {
				script.state = 1;
				carrying = true;
				contact = false;
				keypress = false;
			}
		}

		// If player has vinyl, mouse click throws the vinyl.
		if (Input.GetKeyDown (KeyCode.Mouse1)) {
			if (script.state == 1) {
				script.state = 2;
				carrying = false;
			}
		}

		// Update Kills UI.
		UpdateKills (intKills); 
			
	}

	void OnTriggerEnter2D (Collider2D other){

		// If player collides with a zombie, reset player position, play sound, and decrease lives by 1. End game if Lives = 0.
		if (other.gameObject.CompareTag ("Zombie")) {
			
			collisionSound.Play();
			zombieBite.Play ();

			intLives -= 1;
			UpdateLives (intLives);

			Vector3 pos = new Vector3(-5.0f,0.0f,0.0f);
			player.transform.position = pos;

			// If player has a vinyl, set it's position off screen so the generator recreates it.
			if (carrying == true) {
				Vector3 resetVinyl = new Vector3 (14.0f, 0.0f, 0.0f);
				vinyl.transform.position = resetVinyl;
			}

			Destroy (other.gameObject);

			if (intLives == 0) {
				youLose.Play ();
				dinner.text = "Nice try but you were eaten.";

			}
		}

		// Detect if player is in contact with vinyl and capture object.
		if (other.gameObject.CompareTag ("vinyl")) {
			vinyl = other.GetComponent<Rigidbody2D> ();
			script = other.GetComponent<VinylBehavior>();
			contact = true;
		}
	}

	// Reset contact status to false if the player leaves the vinyl location.
	void OnTriggerExit2D (Collider2D other) {
		if (other.gameObject.CompareTag ("vinyl")) {
			contact = false;
		}
	}		

	// Update UI.
	void UpdateLives(int count) {
		lives.text = "Lives " + count;
	}

	void UpdateKills(int count) {
		kills.text = "Kills " + count;
	}
}
