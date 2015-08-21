/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNCollectionViewCell.h>
#import <Twitter/TFNTextDataViewCell.h>

@class UIImageView, UILabel, NSString;

@interface TFNTextCollectionViewCell : TFNCollectionViewCell <TFNTextDataViewCell> {

	long long _style;
	BOOL _multipleTextLines;
	BOOL _multipleDetailTextLines;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	double _detailTextPadding;
	long long _verticalAlignment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                     //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) BOOL multipleTextLines;                    //@synthesize multipleTextLines=_multipleTextLines - In the implementation block
@property (nonatomic,readonly) UILabel * detailTextLabel;               //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (assign,nonatomic) BOOL multipleDetailTextLines;              //@synthesize multipleDetailTextLines=_multipleDetailTextLines - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;               //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) double detailTextPadding;                  //@synthesize detailTextPadding=_detailTextPadding - In the implementation block
+(id)value1CellForCollectionView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 detailText:(id)arg4 ;
+(id)iconCellForCollectionView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 detailText:(id)arg4 icon:(id)arg5 ;
+(id)cellForCollectionView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 ;
+(CGSize)sizeForStyle:(long long)arg1 text:(id)arg2 font:(id)arg3 lineBreakMode:(long long)arg4 multipleLines:(BOOL)arg5 detailText:(id)arg6 font:(id)arg7 lineBreakMode:(long long)arg8 multipleLines:(BOOL)arg9 padding:(double)arg10 constrainedToSize:(CGSize)arg11 contentPadding:(UIEdgeInsets)arg12 ;
+(id)cellForCollectionView:(id)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3 indexPath:(id)arg4 initialization:(/*^block*/id)arg5 ;
+(id)_cellForCollectionView:(id)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3 indexPath:(id)arg4 withText:(id)arg5 detailText:(id)arg6 ;
+(id)subtitleCellForCollectionView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 detailText:(id)arg4 reuseIdentifier:(id)arg5 ;
+(CGSize)sizeForStyle:(long long)arg1 text:(id)arg2 font:(id)arg3 lineBreakMode:(long long)arg4 multipleLines:(BOOL)arg5 detailText:(id)arg6 font:(id)arg7 lineBreakMode:(long long)arg8 multipleLines:(BOOL)arg9 padding:(double)arg10 icon:(id)arg11 constrainedToSize:(CGSize)arg12 contentPadding:(UIEdgeInsets)arg13 ;
+(id)_detailFontForStyle:(long long)arg1 ;
+(id)subtitleCellForCollectionView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 detailText:(id)arg4 ;
+(id)value2CellForCollectionView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 detailText:(id)arg4 ;
+(id)iconCellForCollectionView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 icon:(id)arg4 ;
+(CGSize)sizeForStyle:(long long)arg1 text:(id)arg2 multipleLines:(BOOL)arg3 detailText:(id)arg4 multipleLines:(BOOL)arg5 constrainedToSize:(CGSize)arg6 contentPadding:(UIEdgeInsets)arg7 ;
-(void)setMultipleTextLines:(BOOL)arg1 ;
-(void)setMultipleDetailTextLines:(BOOL)arg1 ;
-(void)initializeStyle:(long long)arg1 ;
-(void)setDetailTextPadding:(double)arg1 ;
-(BOOL)multipleTextLines;
-(BOOL)multipleDetailTextLines;
-(double)detailTextPadding;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(UIImageView *)imageView;
-(id)accessibilityValue;
-(BOOL)isAccessibilityElement;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
@end

