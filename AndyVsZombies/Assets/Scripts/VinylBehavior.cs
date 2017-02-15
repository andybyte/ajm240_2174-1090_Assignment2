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

		self = this.GetComponent<Rigidbody2D>();

		// Set initial position of vinyl.
		transform.position = new Vector3 (-9.0f, -10.0f);

		int i = Random.Range(0, arrayVinyls.Length);
		self.GetComponent<SpriteRenderer>().sprite = arrayVinyls[i];
		spinner.GetComponent<SpriteRenderer> ().sprite = arrayVinyls [i];

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
			spinner.GetComponent<Renderer>().enabled = true;
			self.GetComponent<Renderer>().enabled = false;
			moveDirection = new Vector3(0.5f, 0.0f, 0.0f);
			self.transform.Translate(moveDirection);

		}
	}

	void OnTriggerEnter2D (Collider2D other){

		if (other.gameObject.CompareTag ("Player")) {
//			this.transform.position = other.transform.position;
			player = other.attachedRigidbody;
		}

		if (other.gameObject.CompareTag ("Zombie") && state == 2) {
			Destroy (other.gameObject);
			soundFX.Play();
			smash.Play ();
			this.transform.position = new Vector3 (12.1f, 0.0f, 0.0f);
		}
	}

}
