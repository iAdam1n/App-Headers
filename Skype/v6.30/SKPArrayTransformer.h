/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSMutableArray;

@interface SKPArrayTransformer : NSObject {

	id _observedObject;
	NSString* _collectionKeyPath;
	NSArray* _trackedKeyPaths;
	/*^block*/id _transformation;
	NSMutableArray* _internalSourceObjects;
	NSMutableArray* _mutableObjects;

}

@property (nonatomic,readonly) id observedObject;                                 //@synthesize observedObject=_observedObject - In the implementation block
@property (nonatomic,readonly) NSString * collectionKeyPath;                      //@synthesize collectionKeyPath=_collectionKeyPath - In the implementation block
@property (nonatomic,readonly) NSArray * trackedKeyPaths;                         //@synthesize trackedKeyPaths=_trackedKeyPaths - In the implementation block
@property (nonatomic,copy) id transformation;                                     //@synthesize transformation=_transformation - In the implementation block
@property (nonatomic,retain) NSMutableArray * internalSourceObjects;              //@synthesize internalSourceObjects=_internalSourceObjects - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableObjects;                     //@synthesize mutableObjects=_mutableObjects - In the implementation block
@property (nonatomic,retain) NSArray * objects; 
-(void)addInternalSourceObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeInternalSourceObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)replaceInternalSourceObjects:(id)arg1 withObjects:(id)arg2 atIndexes:(id)arg3 ;
-(void)KVOSKPArrayTransformerCollectionKeyPathValueChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)KVOSKPArrayTransformerKeyPathsDependedOnByPredicateValueChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(id)transformation;
-(id)initWithObject:(id)arg1 collectionKeyPath:(id)arg2 trackedKeyPaths:(id)arg3 transformation:(/*^block*/id)arg4 ;
-(void)replaceObjectInObjectsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)setTransformation:(id)arg1 ;
-(NSArray *)trackedKeyPaths;
-(NSString *)collectionKeyPath;
-(void)setInternalSourceObjects:(NSMutableArray *)arg1 ;
-(NSMutableArray *)internalSourceObjects;
-(void)removeObjectFromObjectsAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inObjectsAtIndex:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)observedObject;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(NSMutableArray *)mutableObjects;
-(void)setMutableObjects:(NSMutableArray *)arg1 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
-(void)startObserving;
-(NSArray *)objects;
-(void)setObjects:(NSArray *)arg1 ;
-(void)stopObserving;
@end
