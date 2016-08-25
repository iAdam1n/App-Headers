/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSButtonRowDelegate;
@class WKInterfaceController, WKInterfaceButton, TSWKClickAction, TSWatchKitData;

@interface TSButtonRow : NSObject {

	WKInterfaceController* _controller;
	WKInterfaceButton* _button;
	TSWKClickAction* _currentAction;
	TSWatchKitData* _wkData;
	id<TSButtonRowDelegate> _delegate;

}

@property (nonatomic,retain) WKInterfaceController * controller;                   //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) WKInterfaceButton * button;                    //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) TSWKClickAction * currentAction;                      //@synthesize currentAction=_currentAction - In the implementation block
@property (nonatomic,retain) TSWatchKitData * wkData;                              //@synthesize wkData=_wkData - In the implementation block
@property (assign,nonatomic,__weak) id<TSButtonRowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(TSWatchKitData *)wkData;
-(void)buttonClicked;
-(void)setWkData:(TSWatchKitData *)arg1 ;
-(WKInterfaceButton *)button;
-(void)setDelegate:(id<TSButtonRowDelegate>)arg1 ;
-(id<TSButtonRowDelegate>)delegate;
-(TSWKClickAction *)currentAction;
-(WKInterfaceController *)controller;
-(void)setController:(WKInterfaceController *)arg1 ;
-(void)setButton:(WKInterfaceButton *)arg1 ;
-(void)setCurrentAction:(TSWKClickAction *)arg1 ;
@end

