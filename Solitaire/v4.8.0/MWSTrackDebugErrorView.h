/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UITableViewCell.h>

@class MWSTrackError, UILabel;

@interface MWSTrackDebugErrorView : UITableViewCell {

	MWSTrackError* _error;
	UILabel* _titleLabel;
	UILabel* _logLabel;

}

@property (nonatomic,retain) MWSTrackError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * logLabel;                 //@synthesize logLabel=_logLabel - In the implementation block
+(CGSize)getSizeOfLabel:(id)arg1 withWidth:(float)arg2 ;
+(CGSize)getSizeOfLabel:(id)arg1 font:(id)arg2 lineBreak:(long long)arg3 lines:(int)arg4 withWidth:(float)arg5 ;
+(float)getHeightWithWidth:(float)arg1 Error:(id)arg2 ;
-(void)setLogLabel:(UILabel *)arg1 ;
-(UILabel *)logLabel;
-(float)getHeightWithWidth:(float)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setError:(MWSTrackError *)arg1 ;
-(MWSTrackError *)error;
@end

