using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

	public Rigidbody2D player;
	public int speed;
	public AudioSource crashSound;
	private SpriteRenderer playerSprite ;
	private VinylBehavior script;
	private bool keypress;
	private bool contact;
	public Camera camera;
	private Rigidbody2D vinyl;
	private string spriteDirection;



	// Use this for initialization
	void Start () {
		player = GetComponent<Rigidbody2D>();
		playerSprite = GetComponent<SpriteRenderer> ();
		spriteDirection = "right";
		contact = false;
	}

	void Update () {

		Vector3 screenPos = camera.WorldToScreenPoint(player.position);

		Vector3 move = new Vector3 (Input.GetAxis ("Horizontal"), Input.GetAxis ("Vertical"), 0.0f);

		// Prevent player from moving off the level.

		if (screenPos.x < 30 & move.x < 0.0f) {
			move.x = 0.0f;
		} 
		if (screenPos.x > 1200 & move.x > 0.0f) {
			move.x = 0.0f;
		} 
		if (player.position.y > 4.1f & move.y > 0.0f) {
			move.y = 0.0f;
		} 
		if (player.position.y < -3.83f & move.y < 0.0f) {
			move.y = 0.0f;
		}

		transform.position += move * speed * Time.deltaTime;

		if (Input.GetKeyDown (KeyCode.LeftArrow)) {
			spriteDirection = "left";
			playerSprite.flipX = false;
		} else if (Input.GetKeyDown (KeyCode.RightArrow)) {
			spriteDirection = "right";
			playerSprite.flipX = true;
		}

		if (Input.GetKeyDown (KeyCode.Mouse0)) {
			keypress = true;
		}
		if (Input.GetKeyUp (KeyCode.Mouse0)) {
			keypress = false;
		}

		if (Input.GetKeyDown (KeyCode.Mouse0)) {
			if (contact == true && keypress == true) {
				script.state = 1;
				contact = false;
				keypress = false;
			}
		}
		if (Input.GetKeyDown (KeyCode.Mouse1)) {
			if (script.state == 1) {
				script.state = 2;
			}
		}


			
	}

	void OnTriggerEnter2D (Collider2D other){
		if (other.gameObject.CompareTag ("Zombie")) {
			crashSound.Play();
			Destroy (other.gameObject);
		}
		if (other.gameObject.CompareTag ("vinyl")) {
			vinyl = other.GetComponent<Rigidbody2D> ();
			script = other.GetComponent<VinylBehavior>();
			contact = true;
		}
	}

	void OnTriggerExit2D (Collider2D other) {
		if (other.gameObject.CompareTag ("vinyl")) {
			contact = false;
		}
	}		
}
