/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ECBCricketApp/ECBCricketApp-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, NSString;

@interface ECBMatchInfoTossCell : UITableViewCell {

	UILabel* tossLabel;
	NSString* _tossInformation;

}

@property (nonatomic,copy) NSString * tossInformation;              //@synthesize tossInformation=_tossInformation - In the implementation block
+(double)cellHeightForTossInformation:(id)arg1 cellWidth:(double)arg2 ;
+(CGSize)tossLabelSizeForTossInformation:(id)arg1 cellWidth:(double)arg2 ;
-(void)setTossInformation:(NSString *)arg1 ;
-(NSString *)tossInformation;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

