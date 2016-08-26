/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/MKALView.h>

@class SKPCallStateMachine;

@interface SKPCallStateMachineModelView : MKALView {

	SKPCallStateMachine* _callStateMachine;

}

@property (nonatomic,retain) SKPCallStateMachine * callStateMachine;              //@synthesize callStateMachine=_callStateMachine - In the implementation block
@property (nonatomic,readonly) double longDurationAnimation; 
@property (nonatomic,readonly) double shortDurationAnimation; 
+(id)observedCallStateMachineKeyPaths;
+(double)rotationAngleForOrientation:(long long)arg1 mirrored:(BOOL)arg2 ;
-(void)setCallStateMachine:(SKPCallStateMachine *)arg1 ;
-(BOOL)shouldRefreshWithKeyPath:(id)arg1 change:(id)arg2 ;
-(void)refreshDueToChangeInCallStateMachineProperty:(id)arg1 change:(id)arg2 ;
-(double)longDurationAnimation;
-(double)shortDurationAnimation;
-(void)animateWithDuration:(double)arg1 bounce:(BOOL)arg2 delay:(double)arg3 options:(unsigned long long)arg4 animations:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)animateWithBounce:(BOOL)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(SKPCallStateMachine *)callStateMachine;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
