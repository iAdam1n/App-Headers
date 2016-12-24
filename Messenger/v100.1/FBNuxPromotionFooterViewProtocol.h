/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UILabel, UIButton;


@protocol FBNuxPromotionFooterViewProtocol
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UILabel * descriptionLabel; 
@property (nonatomic,readonly) UIButton * primaryButton; 
@property (nonatomic,readonly) UIButton * dismissButton; 
@required
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2;
-(void)unsetImage;
-(void)setAnimatedImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 buttonStyle:(unsigned long long)arg3;
-(id)initWithFrame:(CGRect)arg1;
-(void)setImage:(id)arg1;
-(UILabel *)titleLabel;
-(UIButton *)dismissButton;
-(UIButton *)primaryButton;
-(UILabel *)descriptionLabel;

@end
