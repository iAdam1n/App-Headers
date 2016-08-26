/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSArray, TGChatActionItem, UILongPressGestureRecognizer;

@interface TGChatActionsContainerView : UIView {

	NSArray* _items;
	TGChatActionItem* _expandedItem;
	UILongPressGestureRecognizer* _pressGestureRecognizer;
	BOOL _invertOrder;

}

@property (assign,nonatomic) BOOL invertOrder;              //@synthesize invertOrder=_invertOrder - In the implementation block
-(id)displayedItems;
-(BOOL)invertOrder;
-(void)setInvertOrder:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithItems:(id)arg1 ;
-(double)preferredHeight;
@end
