/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:19:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/08508F9E-DA8B-4AFD-AB09-7444BD482D44/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ECBCricketApp/ECBCricketApp-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, ECBMatchFact;

@interface ECBMatchFactsCell : UITableViewCell {

	UILabel* matchFactLabel;
	ECBMatchFact* _matchFact;

}

@property (nonatomic,retain) ECBMatchFact * matchFact;              //@synthesize matchFact=_matchFact - In the implementation block
+(double)cellHeightForMatchFact:(id)arg1 cellWidth:(double)arg2 ;
+(CGSize)matchFactLabelSizeForMatchFact:(id)arg1 cellWidth:(double)arg2 ;
-(void)setMatchFact:(ECBMatchFact *)arg1 ;
-(ECBMatchFact *)matchFact;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
