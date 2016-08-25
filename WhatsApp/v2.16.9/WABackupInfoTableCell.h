/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UITableViewCell.h>

@class WAAnimatedGearsView, UILabel, NSMutableArray, NSString;

@interface WABackupInfoTableCell : UITableViewCell {

	WAAnimatedGearsView* _gearsView;
	UILabel* _labelHelperText;
	NSMutableArray* _detailLabels;

}

@property (nonatomic,retain) NSMutableArray * detailLabels;                   //@synthesize detailLabels=_detailLabels - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets customLayoutMargins; 
@property (nonatomic,readonly) WAAnimatedGearsView * gearsView;               //@synthesize gearsView=_gearsView - In the implementation block
@property (nonatomic,copy) NSString * detailText; 
@property (nonatomic,readonly) UILabel * labelHelperText;                     //@synthesize labelHelperText=_labelHelperText - In the implementation block
-(UILabel *)labelHelperText;
-(NSMutableArray *)detailLabels;
-(UIEdgeInsets)customLayoutMargins;
-(double)heightForContentWidth:(double)arg1 ;
-(WAAnimatedGearsView *)gearsView;
-(void)setDetailLabels:(NSMutableArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDetailText:(NSString *)arg1 ;
-(NSString *)detailText;
-(void)updateFonts;
@end

