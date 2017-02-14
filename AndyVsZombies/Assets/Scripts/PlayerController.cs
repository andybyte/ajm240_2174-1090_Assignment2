using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

	public Rigidbody2D player;
	public int speed;
	public AudioSource crashSound;
	private SpriteRenderer playerSprite ;
	private string spriteDirection;

	public float pickUpDistance = 1.0f;
	private Transform carriedVinyl = null;
	private int pickupLayer = 1 << LayerMask.NameToLayer( "Pickup" );


	// Use this for initialization
	void Start () {
		player = GetComponent<Rigidbody2D>();
		playerSprite = GetComponent<SpriteRenderer> ();
		spriteDirection = "right";
	}

	void Update () {
		Vector3 move = new Vector3 (Input.GetAxis ("Horizontal"), Input.GetAxis ("Vertical"), 0.0f);

		// Prevent player from moving off the level.

		if (player.position.x < -9.4f & move.x < 0.0f) {
			move.x = 0.0f;
		} 
		if (player.position.x > 9.21f & move.x > 0.0f) {
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
//			transform.localRotation = Quaternion.Euler (0, 180, 0);
		} else if (Input.GetKeyDown (KeyCode.RightArrow)) {
			spriteDirection = "right";
			playerSprite.flipX = true;
		}

		if (Input.GetMouseButton (KeyCode.Mouse0)) {
			PickUpVinyl ();
		}
	}
	
	// Update is called once per frame
//	void FixedUpdate () {
//	}

	void OnTriggerEnter2D (Collider2D other){
		if (other.gameObject.CompareTag ("Zombie")) {
			crashSound.Play();
			Destroy (other.gameObject);
		}
	}

	private void PickUp() {
		Collider[] pickups = Physics.OverlapSphere (transform.position, pickUpDistance, pickupLayer);


		// Find the closest
		float dist = Mathf.Infinity;
		for (int i = 0; i < pickups.Length; i++) {
			float newDist = (transform.position - pickups [i].transform.position).sqrMagnitude;
			if (newDist < dist) {
				carriedVinyl = pickups [i].transform;
				dist = newDist;
			}
		}

		if (carriedVinyl != null) { // Check if we found something
			// Set the box in front of character
			Destroy (carriedVinyl.rigidbody);
			carriedVinyl.parent = transform;
			carriedVinyl.localPosition = new Vector3 (0, 1f, 1f); // Might need to change that 
		}
	}

		
}
