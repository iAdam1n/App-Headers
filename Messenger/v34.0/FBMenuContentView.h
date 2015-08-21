/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBMenuContentViewDelegate;
@class NSMutableArray, NSArray;

@interface FBMenuContentView : UIView {

	id<FBMenuContentViewDelegate> _delegate;
	NSMutableArray* _buttons;
	NSMutableArray* _separators;

}

@property (assign,nonatomic,__weak) id<FBMenuContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * buttons;                                   //@synthesize buttons=_buttons - In the implementation block
-(void)displayButtonTitles:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMenuContentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBMenuContentViewDelegate>)delegate;
-(NSArray *)buttons;
-(void)_buttonPressed:(id)arg1 ;
@end

