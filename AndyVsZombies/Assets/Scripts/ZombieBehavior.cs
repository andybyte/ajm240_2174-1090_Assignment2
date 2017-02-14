using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieBehavior : MonoBehaviour {

	private float speed;
	private float posY;
	private float posX;

	// Use this for initialization.

	void Start () {

		// Set random speed of the zombie. #DONE
		speed = Random.Range(0.01f,0.05f);

		// -4 to 2 upper/lower limits ; relative to the pivot center of the background.
		posY = Random.Range (-4.0f, 4.14f);

		// Set X to be off screen. #DONE
		posX = 11.0f;

		// Set initial position of zombie.
		transform.position = new Vector3 (posX, posY);
	}
	
	// Update is called once per frame.

	void Update () {
		transform.position = new Vector3 (transform.position.x - speed, posY);
	}
}
