/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UINavigationItem, NSDictionary;

@interface _PTHTweetbotTitleView : UIView {

	UILabel* _label;
	UINavigationItem* _navigationItem;
	NSDictionary* _titleTextAttributes;

}

@property (assign,nonatomic,__weak) UINavigationItem * navigationItem;              //@synthesize navigationItem=_navigationItem - In the implementation block
@property (nonatomic,retain) NSDictionary * titleTextAttributes;                    //@synthesize titleTextAttributes=_titleTextAttributes - In the implementation block
-(UINavigationItem *)navigationItem;
-(id)initWithNavigationItem:(id)arg1 ;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(void)_updateLabel;
-(void)setNavigationItem:(UINavigationItem *)arg1 ;
@end

