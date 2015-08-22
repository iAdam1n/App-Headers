/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNDateComparable.h>
#import <Twitter/TFNTwitterTimelinePlistSerialization.h>

@class NSArray, NSString, TFNTwitterSuggestsInfo, NSDate;

@interface TFNTwitterSuggestsModule : NSObject <TFNDateComparable, TFNTwitterTimelinePlistSerialization> {

	BOOL _shouldJump;
	BOOL _shouldDisplay;
	BOOL _shouldLogImpression;
	NSArray* _statuses;
	NSString* _identifier;
	NSString* _headerString;
	NSString* _dismissString;
	NSString* _feedbackString;
	NSString* _yesString;
	NSString* _noString;
	TFNTwitterSuggestsInfo* _suggestsInfo;
	NSDate* _comparableDate;

}

@property (nonatomic,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * statuses;                                 //@synthesize statuses=_statuses - In the implementation block
@property (nonatomic,readonly) NSArray * objects; 
@property (nonatomic,readonly) NSString * headerString;                            //@synthesize headerString=_headerString - In the implementation block
@property (nonatomic,readonly) NSString * dismissString;                           //@synthesize dismissString=_dismissString - In the implementation block
@property (nonatomic,readonly) NSString * feedbackString;                          //@synthesize feedbackString=_feedbackString - In the implementation block
@property (nonatomic,readonly) NSString * yesString;                               //@synthesize yesString=_yesString - In the implementation block
@property (nonatomic,readonly) NSString * noString;                                //@synthesize noString=_noString - In the implementation block
@property (nonatomic,readonly) BOOL shouldJump;                                    //@synthesize shouldJump=_shouldJump - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisplay;                                 //@synthesize shouldDisplay=_shouldDisplay - In the implementation block
@property (nonatomic,readonly) TFNTwitterSuggestsInfo * suggestsInfo;              //@synthesize suggestsInfo=_suggestsInfo - In the implementation block
@property (assign,nonatomic) BOOL shouldLogImpression;                             //@synthesize shouldLogImpression=_shouldLogImpression - In the implementation block
@property (nonatomic,retain) NSDate * comparableDate;                              //@synthesize comparableDate=_comparableDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createSuggestsModuleIdentifer;
+(id)suggestsModuleIdentiferInDictionary:(id)arg1 ;
-(id)scribeParameters;
-(NSString *)dismissString;
-(TFNTwitterSuggestsInfo *)suggestsInfo;
-(NSString *)feedbackString;
-(NSArray *)statuses;
-(BOOL)shouldLogImpression;
-(void)setShouldLogImpression:(BOOL)arg1 ;
-(id)timelinePlistDictionaryValue;
-(id)initWithTimelinePlistDictionary:(id)arg1 ;
-(id)allUserIDsInTimelinePlistDictionary;
-(BOOL)populateModelObjectsInTimelinePlistDictionaryWithStatuses:(id)arg1 users:(id)arg2 ;
-(NSDate *)comparableDate;
-(id)allStatusIDsInTimelinePlistDictionary;
-(void)setComparableDate:(NSDate *)arg1 ;
-(void)removeContentRelatedToUser:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 statusesDictionary:(id)arg2 comparableDate:(id)arg3 ;
-(BOOL)shouldJump;
-(id)initWithIdentifier:(id)arg1 statuses:(id)arg2 headerString:(id)arg3 feedbackString:(id)arg4 dismissString:(id)arg5 yesString:(id)arg6 noString:(id)arg7 shouldJump:(BOOL)arg8 shouldDisplay:(BOOL)arg9 suggestsInfo:(id)arg10 shouldLogImpression:(BOOL)arg11 comparableDate:(id)arg12 ;
-(NSArray *)objects;
-(id)init;
-(long long)compare:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isEmpty;
-(NSString *)headerString;
-(BOOL)shouldDisplay;
-(NSString *)yesString;
-(NSString *)noString;
@end
