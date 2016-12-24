/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSPredicate;


@protocol FBAdInterfacesTokenParser <NSObject>
@property (nonatomic,retain) NSPredicate * existingTokensFilter; 
@required
-(id)pickerTitle;
-(id)promptText;
-(NSPredicate *)existingTokensFilter;
-(id)placeholderImagePath;
-(id)welcomeText:(id)arg1;
-(id)queryWithSearchTerms:(id)arg1;
-(id)parseResponse:(id)arg1;
-(void)setExistingTokensFilter:(id)arg1;

@end
