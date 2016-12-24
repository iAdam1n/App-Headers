/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface FBEventPostBarValueModel : FBValueObject <NSCopying> {

	BOOL _canViewerPost;
	NSString* _eventId;
	NSString* _eventCreatorGraphQLID;
	NSString* _viewerGuestStatus;
	NSString* _connectionStyle;
	NSString* _eventKind;
	NSDate* _eventStartDate;
	NSDate* _eventEndDate;
	double _eventLocationLatitude;
	double _eventLocationLongitude;

}

@property (nonatomic,copy,readonly) NSString * eventId;                            //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,readonly) BOOL canViewerPost;                                 //@synthesize canViewerPost=_canViewerPost - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventCreatorGraphQLID;              //@synthesize eventCreatorGraphQLID=_eventCreatorGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewerGuestStatus;                  //@synthesize viewerGuestStatus=_viewerGuestStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * connectionStyle;                    //@synthesize connectionStyle=_connectionStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventKind;                          //@synthesize eventKind=_eventKind - In the implementation block
@property (nonatomic,copy,readonly) NSDate * eventStartDate;                       //@synthesize eventStartDate=_eventStartDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * eventEndDate;                         //@synthesize eventEndDate=_eventEndDate - In the implementation block
@property (nonatomic,readonly) double eventLocationLatitude;                       //@synthesize eventLocationLatitude=_eventLocationLatitude - In the implementation block
@property (nonatomic,readonly) double eventLocationLongitude;                      //@synthesize eventLocationLongitude=_eventLocationLongitude - In the implementation block
-(NSString *)viewerGuestStatus;
-(NSString *)eventKind;
-(BOOL)canViewerPost;
-(id)initWithEventId:(id)arg1 canViewerPost:(BOOL)arg2 eventCreatorGraphQLID:(id)arg3 viewerGuestStatus:(id)arg4 connectionStyle:(id)arg5 eventKind:(id)arg6 eventStartDate:(id)arg7 eventEndDate:(id)arg8 eventLocationLatitude:(double)arg9 eventLocationLongitude:(double)arg10 ;
-(NSString *)eventCreatorGraphQLID;
-(double)eventLocationLatitude;
-(double)eventLocationLongitude;
-(NSString *)eventId;
-(NSString *)connectionStyle;
-(NSDate *)eventStartDate;
-(NSDate *)eventEndDate;
@end
