using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VinylBehavior : MonoBehaviour {

	public VinylGenerator vinylGen;
	public float speed;
	private Vector3 target;
	public int state = 0;
	private Rigidbody2D self;
	private Rigidbody2D player;

	// Use this for initialization
	void Start () {

		self = this.GetComponent<Rigidbody2D>();
		vinylGen = GetComponent<VinylGenerator> ();

		// Set initial position of zombie.
		transform.position = new Vector3 (-9.0f, -10.0f);
//
//		// Set random speed of the zombie. #DONE
//		speed = Random.Range(0.01f,0.05f);
//
//		// -4 to 2 upper/lower limits ; relative to the pivot center of the background.
//		posY = Random.Range (-4.0f, 4.14f);
//
//		// Set X to be off screen. #DONE
//		posX = 11.0f;
//
		// Set initial position of zombie.
//		target.transform.position = new Vector3 (posX, posY);

		target = new Vector3 (Random.Range (-8.7f, 0.0f), -3.9f);
	}
	
	// Update is called once per frame
	void Update () {
		if (state == 0) {
			float step = speed * Time.deltaTime;
			transform.position = Vector3.MoveTowards (transform.position, target, step);
		}

		if (state == 1) {
			transform.position = player.position;
		}

		if (state == 2) {
//			Vector3 move = new Vector3 (self.AddForce, Input.GetAxis ("Vertical"), 0.0f);
//			transform.position += move * speed * Time.deltaTime;
			self.AddForce(transform.right * 10.0f);
		}

		if (self.position.x > 12.0f) {
			Destroy (self.gameObject);
			vinylGen.CreateVinyl();
		}
	}

	void OnTriggerEnter2D (Collider2D other){

		if (other.gameObject.CompareTag ("Player")) {
			this.transform.position = other.transform.position;
//			state = 1;
			player = other.attachedRigidbody;
		}
	}



}
