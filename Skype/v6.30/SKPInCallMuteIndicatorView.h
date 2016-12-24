/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
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
-(void)showMuteIndicatorInNeeded;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)commonInit;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)shouldShowControls;
-(void)setShouldShowControls:(BOOL)arg1 ;
@end
