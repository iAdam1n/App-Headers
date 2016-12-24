/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNComposerAutoCollapseMonitorDelegate;
#import <Messenger/Messenger-Structs.h>
@class FBTimer;

@interface MNComposerAutoCollapseMonitor : NSObject {

	long long _composerBarMode;
	BOOL _editing;
	BOOL _empty;
	BOOL _invalid;
	BOOL _scrolling;
	BOOL _selected;
	double _timeoutStartTime;
	FBTimer* _timer;
	id<MNComposerAutoCollapseMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNComposerAutoCollapseMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_checkTimeout;
-(void)_updateFlag:(BOOL*)arg1 value:(BOOL)arg2 ;
-(void)resetTimeout;
-(void)updateWithComposerBarMode:(long long)arg1 ;
-(void)updateWithTextLength:(unsigned long long)arg1 ;
-(void)textViewDidBeginEditing;
-(void)textViewDidEndEditing;
-(void)textViewDidBeginScrolling;
-(void)textViewDidEndScrolling;
-(id)init;
-(void)setDelegate:(id<MNComposerAutoCollapseMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id<MNComposerAutoCollapseMonitorDelegate>)delegate;
-(void)invalidate;
-(void)textViewDidChangeSelection:(NSRange)arg1 ;
-(BOOL)_isEnabled;
-(void)_updateTimer;
@end
