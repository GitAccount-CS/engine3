/*
 *	testsuite3/tests/TestIDLClass.cpp generated by engine3 IDL compiler 0.60
 */

#include "TestIDLClass.h"

/*
 *	TestIDLClassStub
 */

enum {RPC_GETVALUE__ = 1133365074,RPC_SETVALUE__INT_,RPC_SETVALUE2__INT_INT_,RPC_SETPARENT__TESTIDLCLASS_,RPC_TESTSHIT__VECTOR_,RPC_GETPARENT__,RPC_ASYNCTEST__};

TestIDLClass::TestIDLClass(int val) : ManagedObject(DummyConstructorParameter::instance()) {
	TestIDLClassImplementation* _implementation = new TestIDLClassImplementation(val);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("TestIDLClass");
}

TestIDLClass::TestIDLClass(DummyConstructorParameter* param) : ManagedObject(param) {
	_setClassName("TestIDLClass");
}

TestIDLClass::~TestIDLClass() {
}



int TestIDLClass::getValue() {
	TestIDLClassImplementation* _implementation = static_cast<TestIDLClassImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETVALUE__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getValue();
	}
}

void TestIDLClass::setValue(int val) {
	TestIDLClassImplementation* _implementation = static_cast<TestIDLClassImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETVALUE__INT_);
		method.addSignedIntParameter(val);

		method.executeWithVoidReturn();
	} else {
		_implementation->setValue(val);
	}
}

void TestIDLClass::setValue2(int val1, int val2) {
	TestIDLClassImplementation* _implementation = static_cast<TestIDLClassImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETVALUE2__INT_INT_);
		method.addSignedIntParameter(val1);
		method.addSignedIntParameter(val2);

		method.executeWithVoidReturn();
	} else {
		_implementation->setValue2(val1, val2);
	}
}

void TestIDLClass::setParent(TestIDLClass* val) {
	TestIDLClassImplementation* _implementation = static_cast<TestIDLClassImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETPARENT__TESTIDLCLASS_);
		method.addObjectParameter(val);

		method.executeWithVoidReturn();
	} else {
		_implementation->setParent(val);
	}
}

void TestIDLClass::testShit(const Vector<int>& val) {
	TestIDLClassImplementation* _implementation = static_cast<TestIDLClassImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_TESTSHIT__VECTOR_);
		method.addDereferencedSerializableParameter(val);

		method.executeWithVoidReturn();
	} else {
		_implementation->testShit(val);
	}
}

Vector<int>* TestIDLClass::getTestVector() {
	TestIDLClassImplementation* _implementation = static_cast<TestIDLClassImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getTestVector();
	}
}

ManagedWeakReference<TestIDLClass* > TestIDLClass::getParent() {
	TestIDLClassImplementation* _implementation = static_cast<TestIDLClassImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPARENT__);

		return static_cast<TestIDLClass*>(method.executeWithObjectReturn());
	} else {
		return _implementation->getParent();
	}
}

void TestIDLClass::asyncTest() {
	TestIDLClassImplementation* _implementation = static_cast<TestIDLClassImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ASYNCTEST__, true);

		method.executeWithVoidReturn(true);
	} else {
		_implementation->asyncTest();
	}
}

DistributedObjectServant* TestIDLClass::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* TestIDLClass::_getImplementationForRead() const {
	return _impl;
}

void TestIDLClass::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	TestIDLClassImplementation
 */

TestIDLClassImplementation::TestIDLClassImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


TestIDLClassImplementation::~TestIDLClassImplementation() {
}


void TestIDLClassImplementation::finalize() {
}

void TestIDLClassImplementation::_initializeImplementation() {
	_setClassHelper(TestIDLClassHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void TestIDLClassImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<TestIDLClass*>(stub);
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* TestIDLClassImplementation::_getStub() {
	return _this.get();
}

TestIDLClassImplementation::operator const TestIDLClass*() {
	return _this.get();
}

void TestIDLClassImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void TestIDLClassImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void TestIDLClassImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void TestIDLClassImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void TestIDLClassImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void TestIDLClassImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void TestIDLClassImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void TestIDLClassImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("TestIDLClass");

}

void TestIDLClassImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(TestIDLClassImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool TestIDLClassImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x3f1d6b14: //TestIDLClass.value
		TypeInfo<int >::parseFromBinaryStream(&value, stream);
		return true;

	case 0xeef7092b: //TestIDLClass.testVector
		TypeInfo<Vector<int> >::parseFromBinaryStream(&testVector, stream);
		return true;

	case 0xc299c5c9: //TestIDLClass.parent
		TypeInfo<ManagedWeakReference<TestIDLClass* > >::parseFromBinaryStream(&parent, stream);
		return true;

	}

	return false;
}

void TestIDLClassImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = TestIDLClassImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int TestIDLClassImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x3f1d6b14; //TestIDLClass.value
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&value, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xeef7092b; //TestIDLClass.testVector
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Vector<int> >::toBinaryStream(&testVector, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xc299c5c9; //TestIDLClass.parent
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<TestIDLClass* > >::toBinaryStream(&parent, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 3;
}

TestIDLClassImplementation::TestIDLClassImplementation(int val) {
	_initializeImplementation();
	// testsuite3/tests/TestIDLClass.idl():  		value = val;
	value = val;
	// testsuite3/tests/TestIDLClass.idl():  		testVector.add(-1);
	(&testVector)->add(-1);
	// testsuite3/tests/TestIDLClass.idl():  		testVector.add(5);
	(&testVector)->add(5);
}

int TestIDLClassImplementation::getValue() {
	// testsuite3/tests/TestIDLClass.idl():  		return value;
	return value;
}

void TestIDLClassImplementation::setValue(int val) {
	// testsuite3/tests/TestIDLClass.idl():  		value = val;
	value = val;
}

void TestIDLClassImplementation::setValue2(int val1, int val2) {
	// testsuite3/tests/TestIDLClass.idl():  	 value = val2;
	value = val2;
}

void TestIDLClassImplementation::setParent(TestIDLClass* val) {
	// testsuite3/tests/TestIDLClass.idl():  	 parent = val;
	parent = val;
}

void TestIDLClassImplementation::testShit(const Vector<int>& val) {
}

Vector<int>* TestIDLClassImplementation::getTestVector() {
	// testsuite3/tests/TestIDLClass.idl():  	 return testVector;
	return (&testVector);
}

ManagedWeakReference<TestIDLClass* > TestIDLClassImplementation::getParent() {
	// testsuite3/tests/TestIDLClass.idl():  	 return parent;
	return parent;
}

void TestIDLClassImplementation::asyncTest() {
}

/*
 *	TestIDLClassAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


TestIDLClassAdapter::TestIDLClassAdapter(TestIDLClass* obj) : ManagedObjectAdapter(obj) {
}

void TestIDLClassAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_GETVALUE__:
		{
			
			int _m_res = getValue();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_SETVALUE__INT_:
		{
			int val = inv->getSignedIntParameter();
			
			setValue(val);
			
		}
		break;
	case RPC_SETVALUE2__INT_INT_:
		{
			int val1 = inv->getSignedIntParameter();
			int val2 = inv->getSignedIntParameter();
			
			setValue2(val1, val2);
			
		}
		break;
	case RPC_SETPARENT__TESTIDLCLASS_:
		{
			TestIDLClass* val = static_cast<TestIDLClass*>(inv->getObjectParameter());
			
			setParent(val);
			
		}
		break;
	case RPC_TESTSHIT__VECTOR_:
		{
			 Vector<int> val = inv->getDereferencedSerializableParameter<Vector<int> >();
			
			testShit(val);
			
		}
		break;
	case RPC_GETPARENT__:
		{
			
			DistributedObject* _m_res = getParent().get();
			resp->insertLong(_m_res == NULL ? 0 : _m_res->_getObjectID());
		}
		break;
	case RPC_ASYNCTEST__:
		{
			
			asyncTest();
			
		}
		break;
	default:
		ManagedObjectAdapter::invokeMethod(methid, inv);
	}
}

int TestIDLClassAdapter::getValue() {
	return (static_cast<TestIDLClass*>(stub))->getValue();
}

void TestIDLClassAdapter::setValue(int val) {
	(static_cast<TestIDLClass*>(stub))->setValue(val);
}

void TestIDLClassAdapter::setValue2(int val1, int val2) {
	(static_cast<TestIDLClass*>(stub))->setValue2(val1, val2);
}

void TestIDLClassAdapter::setParent(TestIDLClass* val) {
	(static_cast<TestIDLClass*>(stub))->setParent(val);
}

void TestIDLClassAdapter::testShit(const Vector<int>& val) {
	(static_cast<TestIDLClass*>(stub))->testShit(val);
}

ManagedWeakReference<TestIDLClass* > TestIDLClassAdapter::getParent() {
	return (static_cast<TestIDLClass*>(stub))->getParent();
}

void TestIDLClassAdapter::asyncTest() {
	(static_cast<TestIDLClass*>(stub))->asyncTest();
}

/*
 *	TestIDLClassHelper
 */

TestIDLClassHelper* TestIDLClassHelper::staticInitializer = TestIDLClassHelper::instance();

TestIDLClassHelper::TestIDLClassHelper() {
	className = "TestIDLClass";

	Core::getObjectBroker()->registerClass(className, this);
}

void TestIDLClassHelper::finalizeHelper() {
	TestIDLClassHelper::finalize();
}

DistributedObject* TestIDLClassHelper::instantiateObject() {
	return new TestIDLClass(DummyConstructorParameter::instance());
}

DistributedObjectServant* TestIDLClassHelper::instantiateServant() {
	return new TestIDLClassImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* TestIDLClassHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TestIDLClassAdapter(static_cast<TestIDLClass*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

