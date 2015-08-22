/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNTwitterScribe, NSString;

@interface TFNTwitterMomentsGuideScribeDelegate : NSObject {

	TFNTwitterScribe* _scribe;
	NSString* _scribePage;
	NSString* _scribeSection;
	NSString* _scribeComponent;
	NSString* _scribeElement;

}

@property (nonatomic,retain) TFNTwitterScribe * scribe;               //@synthesize scribe=_scribe - In the implementation block
@property (nonatomic,retain) NSString * scribePage;                   //@synthesize scribePage=_scribePage - In the implementation block
@property (nonatomic,retain) NSString * scribeSection;                //@synthesize scribeSection=_scribeSection - In the implementation block
@property (nonatomic,retain) NSString * scribeComponent;              //@synthesize scribeComponent=_scribeComponent - In the implementation block
@property (nonatomic,retain) NSString * scribeElement;                //@synthesize scribeElement=_scribeElement - In the implementation block
+(id)_scribeParametersForMoment:(id)arg1 wrapInItems:(BOOL)arg2 ;
-(TFNTwitterScribe *)scribe;
-(NSString *)scribePage;
-(NSString *)scribeSection;
-(NSString *)scribeComponent;
-(void)setScribePage:(NSString *)arg1 ;
-(void)setScribeSection:(NSString *)arg1 ;
-(void)setScribeComponent:(NSString *)arg1 ;
-(NSString *)scribeElement;
-(void)setScribe:(TFNTwitterScribe *)arg1 ;
-(void)setScribeElement:(NSString *)arg1 ;
-(id)initWithScribe:(id)arg1 ;
-(void)scribeOpen;
-(void)scribeUnfollowWithMoment:(id)arg1 component:(id)arg2 ;
-(void)scribeFollowWithMoment:(id)arg1 component:(id)arg2 ;
-(void)scribeClickWithMoment:(id)arg1 component:(id)arg2 ;
-(void)scribeImpressionWithMoment:(id)arg1 component:(id)arg2 ;
@end
