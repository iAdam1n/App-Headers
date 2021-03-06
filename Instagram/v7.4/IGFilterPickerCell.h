/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:11 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGToolPickerCell.h>

@class NSString, UILabel, UIView;

@interface IGFilterPickerCell : IGToolPickerCell {

	BOOL _displayNewFilterNUX;
	NSString* _imageName;
	Class _filterClass;
	UILabel* _nuxNewLabel;
	UIView* _nuxOverlay;

}

@property (assign,nonatomic) BOOL displayNewFilterNUX;              //@synthesize displayNewFilterNUX=_displayNewFilterNUX - In the implementation block
@property (nonatomic,copy) NSString * imageName;                    //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) Class filterClass;                     //@synthesize filterClass=_filterClass - In the implementation block
@property (nonatomic,retain) UILabel * nuxNewLabel;                 //@synthesize nuxNewLabel=_nuxNewLabel - In the implementation block
@property (nonatomic,retain) UIView * nuxOverlay;                   //@synthesize nuxOverlay=_nuxOverlay - In the implementation block
-(Class)filterClass;
-(void)setFilterClass:(Class)arg1 ;
-(void)setImageName:(id)arg1 filterClass:(Class)arg2 ;
-(void)setDisplayNewFilterNUX:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDisplayNewFilterNUX:(BOOL)arg1 ;
-(UIView *)nuxOverlay;
-(UILabel *)nuxNewLabel;
-(BOOL)displayNewFilterNUX;
-(void)setNuxNewLabel:(UILabel *)arg1 ;
-(void)setNuxOverlay:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
@end

