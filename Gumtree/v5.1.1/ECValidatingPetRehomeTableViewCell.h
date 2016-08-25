/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECValidatingDateTableViewCell.h>

@class NSString, ECLabelSubBody, ECPersistentPlaceholderTextField, UILabel, NSDate;

@interface ECValidatingPetRehomeTableViewCell : ECValidatingDateTableViewCell {

	NSString* _disclaimer;
	NSString* _rehomeLabelText;
	ECLabelSubBody* _disclaimerLabel;
	ECPersistentPlaceholderTextField* _dateOfBirthField;
	UILabel* _rehomeLabel;

}

@property (nonatomic,retain) ECLabelSubBody * disclaimerLabel;                                 //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (nonatomic,retain) ECPersistentPlaceholderTextField * dateOfBirthField;              //@synthesize dateOfBirthField=_dateOfBirthField - In the implementation block
@property (nonatomic,retain) UILabel * rehomeLabel;                                            //@synthesize rehomeLabel=_rehomeLabel - In the implementation block
@property (nonatomic,copy) NSString * disclaimer;                                              //@synthesize disclaimer=_disclaimer - In the implementation block
@property (nonatomic,readonly) NSDate * rehomeDate; 
@property (nonatomic,readonly) NSString * rehomeDateString; 
@property (nonatomic,copy) NSString * rehomeLabelText;                                         //@synthesize rehomeLabelText=_rehomeLabelText - In the implementation block
-(ECPersistentPlaceholderTextField *)dateOfBirthField;
-(NSDate *)rehomeDate;
-(UILabel *)rehomeLabel;
-(NSString *)rehomeLabelText;
-(NSString *)rehomeDateString;
-(void)setDisclaimer:(NSString *)arg1 ;
-(void)setRehomeLabelText:(NSString *)arg1 ;
-(NSString *)disclaimer;
-(void)setDateOfBirthField:(ECPersistentPlaceholderTextField *)arg1 ;
-(void)setRehomeLabel:(UILabel *)arg1 ;
-(void)updateDate;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(ECLabelSubBody *)disclaimerLabel;
-(void)setDisclaimerLabel:(ECLabelSubBody *)arg1 ;
@end

