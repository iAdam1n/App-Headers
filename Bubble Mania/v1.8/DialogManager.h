/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:12 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DialogManagerDelegate;
@class NSMutableDictionary;

@interface DialogManager : NSObject {

	NSMutableDictionary* registeredClasses;
	id<DialogManagerDelegate> delegate;

}

@property (assign,nonatomic) id<DialogManagerDelegate> delegate; 
+(id)instance;
-(Class)classForKey:(id)arg1 ;
-(id)viewWithDictionary:(id)arg1 ;
-(BOOL)handleAction:(id)arg1 withArguments:(id)arg2 ;
-(BOOL)showDialogWithResourceKey:(id)arg1 data:(id)arg2 ;
-(id)dialogWithCallResult:(id)arg1 ;
-(BOOL)showDialogIfNeededWithCallResult:(id)arg1 delegate:(id)arg2 ;
-(BOOL)showDialogWithResourceKey:(id)arg1 ;
-(BOOL)showDialogIfNeededWithCallResult:(id)arg1 ;
-(BOOL)showInsufficientCashDialogWithCashNeeded:(long long)arg1 ;
-(void)setDelegate:(id<DialogManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<DialogManagerDelegate>)delegate;
-(void)registerClass:(Class)arg1 ;
-(BOOL)handleAction:(id)arg1 ;
@end

