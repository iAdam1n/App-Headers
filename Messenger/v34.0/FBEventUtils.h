/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface FBEventUtils : NSObject
+(BOOL)isPastEvent:(id)arg1 ;
+(BOOL)isWithinWeekOffset:(long long)arg1 withStartDate:(id)arg2 endDate:(id)arg3 ;
+(BOOL)isUserHost:(id)arg1 forEvent:(id)arg2 ;
+(BOOL)isInterestedConnectionStyle:(id)arg1 ;
+(BOOL)isRsvpStatusGoing:(id)arg1 ;
+(id)headerDetailTextForEvent:(id)arg1 session:(id)arg2 ;
+(id)socialContextDescriptionForEvent:(id)arg1 session:(id)arg2 ;
+(BOOL)isSavedEvent:(id)arg1 ;
+(BOOL)isPublicEvent:(id)arg1 ;
+(BOOL)hasRespondedToEvent:(id)arg1 ;
+(BOOL)isViewerInvited:(id)arg1 ;
+(BOOL)isEventHappeningToday:(id)arg1 ;
+(BOOL)isConnectedToEvent:(id)arg1 inConnectionTest:(BOOL)arg2 ;
+(BOOL)isViewerGoingToEvent:(id)arg1 ;
+(long long)compareWithReferenceDate:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 ;
@end

