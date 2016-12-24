/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGOverlayController.h>

@class TGConversation, TGChatActionsView;

@interface TGChatActionsController : TGOverlayController {

	TGConversation* _conversation;
	CGRect _initialFrame;
	TGChatActionsView* _actionsView;
	/*^block*/id _parametersBlock;

}

@property (nonatomic,copy) id parametersBlock;              //@synthesize parametersBlock=_parametersBlock - In the implementation block
+(id)setupActionsControllerForParentController:(id)arg1 view:(id)arg2 conversationForLocation:(/*^block*/id)arg3 parametersForConversation:(/*^block*/id)arg4 ;
-(void)setParametersBlock:(id)arg1 ;
-(id)parametersBlock;
-(id)initWithParentController:(id)arg1 conversation:(id)arg2 parametersBlock:(/*^block*/id)arg3 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
@end
