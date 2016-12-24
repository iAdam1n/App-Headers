/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:37 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class SKPCallStateMachine;

@interface SKPCallStateMachineModelCollectionViewCell : UICollectionViewCell {

	SKPCallStateMachine* _callStateMachine;

}

@property (nonatomic,retain) SKPCallStateMachine * callStateMachine;              //@synthesize callStateMachine=_callStateMachine - In the implementation block
+(id)observedCallStateMachineKeyPaths;
-(void)setCallStateMachine:(SKPCallStateMachine *)arg1 ;
-(BOOL)shouldRefreshWithKeyPath:(id)arg1 change:(id)arg2 ;
-(void)refreshDueToChangeInCallStateMachineProperty:(id)arg1 change:(id)arg2 ;
-(SKPCallStateMachine *)callStateMachine;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
