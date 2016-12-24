/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface FBPlacesAboutHoursViewModel : FBValueObject <NSCopying> {

	BOOL _pageIsClosed;
	NSArray* _pageHours;
	NSString* _pageTimezone;

}

@property (nonatomic,readonly) BOOL pageIsClosed;                         //@synthesize pageIsClosed=_pageIsClosed - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pageHours;                  //@synthesize pageHours=_pageHours - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageTimezone;              //@synthesize pageTimezone=_pageTimezone - In the implementation block
+(id)viewModelForPage:(id)arg1 ;
-(id)initWithPageIsClosed:(BOOL)arg1 pageHours:(id)arg2 pageTimezone:(id)arg3 ;
-(BOOL)pageIsClosed;
-(NSArray *)pageHours;
-(NSString *)pageTimezone;
@end
