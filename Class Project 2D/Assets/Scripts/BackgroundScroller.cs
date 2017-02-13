using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundScroller : MonoBehaviour {

	private Rigidbody2D rd2d;
	private float scrollSpeed;

	// Use this for initialization
	void Start () {
		scrollSpeed = 1.5f;
		rd2d = GetComponent<Rigidbody2D> ();
		rd2d.velocity = new Vector2 (scrollSpeed, 0);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
