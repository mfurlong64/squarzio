#pragma strict

function Start () {

}

function Update() {
	// Rotate the object around its local Y axis at 1 degree per second

	transform.Rotate(Time.deltaTime, 0, -1);

	// ...also rotate around the World's Y axis

};

