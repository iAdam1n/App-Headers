/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKSuspensionControllerOutputHandler;
#import <Messenger/Messenger-Structs.h>
@interface CKSuspensionController : NSObject {

	id<CKSuspensionControllerOutputHandler> _outputHandler;
	deque<CKSuspensionControllerChangesetContainer, std::__1::allocator<CKSuspensionControllerChangesetContainer> >* _inputBuffer;
	BOOL _changeInProgress;
	unsigned long long _state;
	BOOL _hasPendingChanges;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasPendingChanges;                //@synthesize hasPendingChanges=_hasPendingChanges - In the implementation block
-(id)initWithOutputHandler:(id)arg1 ;
-(void)processTailInsertion:(const Items*)arg1 ;
-(void)processChangeset:(const Changeset*)arg1 ;
-(void)_emitNextChange;
-(void)_resetChangeInProgressAndEmitChange;
-(void)_popNextChangeset:(/*^block*/id)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)hasPendingChanges;
-(void)setHasPendingChanges:(BOOL)arg1 ;
@end
