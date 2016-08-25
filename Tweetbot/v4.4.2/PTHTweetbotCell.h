/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIViewController, PTHTweetbotObject;

@interface PTHTweetbotCell : UITableViewCell {

	UIViewController* _viewController;
	PTHTweetbotObject* _item;
	BOOL _disableReuse;

}

@property (nonatomic,retain) PTHTweetbotObject * item;                              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,getter=isMarked,nonatomic) BOOL marked; 
@property (assign,nonatomic) BOOL disableReuse;                                     //@synthesize disableReuse=_disableReuse - In the implementation block
+(double)cellHeightWithItem:(id)arg1 forTableView:(id)arg2 ;
+(double)selectedDrawerHeightforTableView:(id)arg1 ;
+(double)separatorOffset;
-(id)sourceItem;
-(void)doubleTap;
-(BOOL)disableReuse;
-(void)setDisableReuse:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(PTHTweetbotObject *)item;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)reuseIdentifier;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setItem:(PTHTweetbotObject *)arg1 ;
-(long long)tid;
-(BOOL)isMarked;
-(void)setMarked:(BOOL)arg1 ;
@end

