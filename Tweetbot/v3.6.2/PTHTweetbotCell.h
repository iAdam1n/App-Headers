/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(long long)tid;
-(void)doubleTap;
-(BOOL)disableReuse;
-(void)setDisableReuse:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(PTHTweetbotObject *)item;
-(id)reuseIdentifier;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setItem:(PTHTweetbotObject *)arg1 ;
-(BOOL)isMarked;
-(void)setMarked:(BOOL)arg1 ;
@end

