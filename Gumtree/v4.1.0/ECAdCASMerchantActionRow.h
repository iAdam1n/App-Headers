/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, ECCASMerchantActionRowLinkLabel;

@interface ECAdCASMerchantActionRow : UIView {

	UIImageView* _iconView;
	ECCASMerchantActionRowLinkLabel* _label;
	/*^block*/id _handler;

}

@property (nonatomic,retain) UIImageView * iconView;                               //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) ECCASMerchantActionRowLinkLabel * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) id handler;                                             //@synthesize handler=_handler - In the implementation block
-(void)handleGestureTap:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 icon:(id)arg2 text:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)hasHandler;
-(ECCASMerchantActionRowLinkLabel *)label;
-(void)setLabel:(ECCASMerchantActionRowLinkLabel *)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setupConstraints;
@end
