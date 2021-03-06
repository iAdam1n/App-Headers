/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/SKPCallStateMachineModelView.h>

@interface SKPInCallMuteIndicatorView : SKPCallStateMachineModelView {

	BOOL _muted;
	BOOL _shouldShowControls;

}

@property (assign,getter=isMuted,nonatomic) BOOL muted;              //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) BOOL shouldShowControls;                //@synthesize shouldShowControls=_shouldShowControls - In the implementation block
+(id)observedCallStateMachineKeyPaths;
-(void)refreshDueToChangeInCallStateMachineProperty:(id)arg1 change:(id)arg2 ;
-(BOOL)shouldShowControls;
-(void)setShouldShowControls:(BOOL)arg1 ;
-(void)showMuteIndicatorInNeeded;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)commonInit;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
@end

