/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:37 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKPArraySubscriberDelegate;
@class NSString, NSArray;

@interface SKPArraySubscriber : NSObject {

	BOOL _enabled;
	id _observedObject;
	NSString* _arrayKeyPath;
	NSArray* _observedKeyPaths;
	id<SKPArraySubscriberDelegate> _delegate;

}

@property (nonatomic,readonly) id observedObject;                                           //@synthesize observedObject=_observedObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * arrayKeyPath;                                //@synthesize arrayKeyPath=_arrayKeyPath - In the implementation block
@property (nonatomic,copy,readonly) NSArray * observedKeyPaths;                             //@synthesize observedKeyPaths=_observedKeyPaths - In the implementation block
@property (nonatomic,__weak,readonly) id<SKPArraySubscriberDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * objects; 
@property (assign,nonatomic) BOOL enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
-(NSString *)arrayKeyPath;
-(void)unsubscribeObjects:(id)arg1 ;
-(void)subscribeObjects:(id)arg1 ;
-(void)observeArrayChange:(id)arg1 ;
-(void)observeObjectChange:(id)arg1 ofObject:(id)arg2 keyPath:(id)arg3 ;
-(id)initWithObservedObject:(id)arg1 arrayKeyPath:(id)arg2 observedKeyPaths:(id)arg3 delegate:(id)arg4 ;
-(BOOL)enabled;
-(void)dealloc;
-(id<SKPArraySubscriberDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)observedObject;
-(void)startObserving;
-(NSArray *)objects;
-(NSArray *)observedKeyPaths;
-(void)stopObserving;
-(void)updateDelegate;
@end
