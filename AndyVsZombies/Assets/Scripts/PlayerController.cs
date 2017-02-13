using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

	public Rigidbody2D player;
	public int speed;
	public AudioSource crashSound;
	private SpriteRenderer playerSprite ;
	private string spriteDirection;

	// Use this for initialization
	void Start () {
		player = GetComponent<Rigidbody2D>();
		playerSprite = GetComponent<SpriteRenderer> ();
		spriteDirection = "right";
	}

	void Update () {
		Vector3 move = new Vector3 (Input.GetAxis ("Horizontal"), Input.GetAxis ("Vertical"), 0.0f);
		transform.position += move * speed * Time.deltaTime;

		if (Input.GetKeyDown (KeyCode.LeftArrow)) {
			spriteDirection = "left";
			playerSprite.flipX = false;
//			transform.localRotation = Quaternion.Euler (0, 180, 0);
		} else if (Input.GetKeyDown (KeyCode.RightArrow)) {
			spriteDirection = "right";
			playerSprite.flipX = true;
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
}
