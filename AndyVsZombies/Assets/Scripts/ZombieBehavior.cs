using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieBehavior : MonoBehaviour {

	private float speed;
	private float posY;

	// Use this for initialization
	void Start () {

		// Set random speed of the zombie #TODO
		speed = 0.03f;

		// -4 to 2 upper/lower limits ; relative to the pivot center of the background.
		posY = Random.Range (-4.0f, 2.0f);

		// Set X to be off screen #TODO	
	}
	
	// Update is called once per frame
	void Update () {
		transform.position = new Vector3 (transform.position.x - speed, posY);
	}
}
