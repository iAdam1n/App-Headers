/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPViewController.h>

@class SKPMyPresencePickerView;

@interface SKPMyPresencePickerController : SKPViewController {

	BOOL _observing;

}

@property (nonatomic,readonly) SKPMyPresencePickerView * myPresenceStatusView; 
@property (assign,getter=isObserving,nonatomic) BOOL observing;                             //@synthesize observing=_observing - In the implementation block
+(id)keyPathToAccountMKPresence;
+(void*)KVOContext;
-(void)unsubscribeFromAccountPresenceChange;
-(void)subscribeToAccountPresenceChange;
-(SKPMyPresencePickerView *)myPresenceStatusView;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isObserving;
-(void)setObserving:(BOOL)arg1 ;
@end
