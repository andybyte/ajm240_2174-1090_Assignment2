using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VinylBehavior : MonoBehaviour {

	public float speed;
	private Vector3 target;
	public int state = 0;
	private Rigidbody2D self;
	private Rigidbody2D player;
	public AudioSource soundFX;
	public AudioSource smash;
	public Sprite [] arrayVinyls;
	public Rigidbody2D spinner;
	private Vector3 moveDirection;


	// Use this for initialization
	void Start () {
		
		// Set initial position of vinyl and store object.
		self = this.GetComponent<Rigidbody2D>();
		transform.position = new Vector3 (-9.0f, -10.0f);

		// Randomly select vinyl cover for both core object and spinner object.
		int i = Random.Range(0, arrayVinyls.Length);
		self.GetComponent<SpriteRenderer>().sprite = arrayVinyls[i];
		spinner.GetComponent<SpriteRenderer> ().sprite = arrayVinyls [i];

		// Set where he vinyl will slide to in the level.
		target = new Vector3 (Random.Range (-8.7f, 0.0f), -3.9f);

	}
	
	// Update is called once per frame
	void Update () {

		// Vinyl slides to start location.
		if (state == 0) {
			float step = speed * Time.deltaTime;
			transform.position = Vector3.MoveTowards (transform.position, target, step);
		}

		// Vinyl in carry mode and moves with player.
		if (state == 1) {
			transform.position = player.position;
		}

		// Vinyl flies right and spins by showing the spinner version and hiding the core object.
		if (state == 2) {
			spinner.GetComponent<Renderer>().enabled = true;
			self.GetComponent<Renderer>().enabled = false;
			moveDirection = new Vector3(0.5f, 0.0f, 0.0f);
			self.transform.Translate(moveDirection);

		}
	}

	void OnTriggerEnter2D (Collider2D other){

		// Vinyl collides with player.
		if (other.gameObject.CompareTag ("Player")) {
			player = other.attachedRigidbody;
		}

		// Vinyl collides with Zombie, plays sound effect, increases kill count, destroys zombie, and detects if player has 20 kills to win.
		if (other.gameObject.CompareTag ("Zombie") && state == 2) {
			Destroy (other.gameObject);

			soundFX.Play();
			smash.Play ();

			player.GetComponent<PlayerController> ().intKills += 1;

			// Move vinyl offscreen where the vinylGenerator will destory it and create another.
			this.transform.position = new Vector3 (12.1f, 0.0f, 0.0f);

			if (player.GetComponent<PlayerController> ().intKills == 20) {
				player.GetComponent<PlayerController> ().youWin.Play ();
				player.GetComponent<PlayerController> ().winner.text = "You Win!\nHail To The King, Baby!";

			}
		}
	}

}
