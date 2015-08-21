/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterMomentContainer.h>
#import <Twitter/TFSTwitterModel.h>

@class TFNTwitterMoment, NSArray, TFNTwitterMomentPage, NSString;

@interface TFNTwitterMomentCapsule : NSObject <TFNTwitterMomentContainer, TFSTwitterModel> {

	TFNTwitterMoment* _moment;
	NSArray* _pages;
	TFNTwitterMomentPage* _coverPage;
	TFNTwitterMomentPage* _largePage;
	TFNTwitterMomentPage* _thumbnailPage;

}

@property (nonatomic,readonly) TFNTwitterMoment * moment;                         //@synthesize moment=_moment - In the implementation block
@property (nonatomic,readonly) NSArray * pages;                                   //@synthesize pages=_pages - In the implementation block
@property (nonatomic,readonly) TFNTwitterMomentPage * coverPage;                  //@synthesize coverPage=_coverPage - In the implementation block
@property (nonatomic,readonly) TFNTwitterMomentPage * largePage;                  //@synthesize largePage=_largePage - In the implementation block
@property (nonatomic,readonly) TFNTwitterMomentPage * thumbnailPage;              //@synthesize thumbnailPage=_thumbnailPage - In the implementation block
@property (nonatomic,readonly) NSArray * allCarouselPages; 
@property (nonatomic,readonly) BOOL needsPageHydration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)momentCapsuleWithJSONData:(id)arg1 error:(out id*)arg2 ;
+(id)hydrateMomentCapsule:(id)arg1 withStatuses:(id)arg2 ;
+(id)capsulePivotListWithJSONData:(id)arg1 error:(out id*)arg2 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(TFNTwitterMomentPage *)largePage;
-(TFNTwitterMomentPage *)thumbnailPage;
-(BOOL)needsPageHydration;
-(TFNTwitterMomentPage *)coverPage;
-(id)pagesForAccount:(id)arg1 ;
-(id)initWithMoment:(id)arg1 pages:(id)arg2 coverPage:(id)arg3 largePage:(id)arg4 thumbnailPage:(id)arg5 ;
-(BOOL)isVisibleByAccount:(id)arg1 ;
-(void)updateMoment:(id)arg1 ;
-(id)initWithMoment:(id)arg1 pages:(id)arg2 coverPage:(id)arg3 ;
-(NSArray *)allCarouselPages;
-(id)init;
-(NSArray *)pages;
-(TFNTwitterMoment *)moment;
@end

