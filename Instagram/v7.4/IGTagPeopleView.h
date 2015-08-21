/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UITapGestureRecognizer, NSString;

@interface IGTagPeopleView : UIControl {

	UIImageView* _tagIndicatorImageView;
	UILabel* _tagPeopleLabel;
	UITapGestureRecognizer* _tapRecognizer;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIImageView * tagIndicatorImageView;                 //@synthesize tagIndicatorImageView=_tagIndicatorImageView - In the implementation block
@property (nonatomic,retain) UILabel * tagPeopleLabel;                            //@synthesize tagPeopleLabel=_tagPeopleLabel - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;              //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setTagCount:(long long)arg1 ;
-(UIImageView *)tagIndicatorImageView;
-(UILabel *)tagPeopleLabel;
-(void)onTap;
-(void)updateWidth;
-(void)setTagIndicatorImageView:(UIImageView *)arg1 ;
-(void)setTagPeopleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
@end

