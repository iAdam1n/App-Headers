/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface Utils : NSObject
+(id)getImageWithName:(id)arg1 andImageType:(int)arg2 andSport:(int)arg3 shouldSendDefaultImageIfFailure:(BOOL)arg4 ;
+(long long)getSystemLanguageCode;
+(void)showConnectionAlertViewWithError:(id)arg1 ;
+(BOOL)dateIsToday:(id)arg1 ;
+(id)getDateAtMidnightFromDate:(id)arg1 ;
+(id)getStandardLogoImageForImageType:(int)arg1 forSport:(int)arg2 ;
+(id)textForStatus:(int)arg1 ;
+(BOOL)notificationsAreEnabled;
+(BOOL)isSameDayWithDate1:(id)arg1 date2:(id)arg2 ;
+(void)initializePreferences;
+(void)updateFromVersion:(double)arg1 ;
+(void)registerApplicationForNotifications;
+(long long)bintypePreferences;
+(id)currentNotificationTokenWithVirtualAllowed:(BOOL)arg1 ;
+(long long)systemLanguageLCID;
+(id)downloadImageWithName:(id)arg1 andRetinaScale:(unsigned short)arg2 andFileExtension:(id)arg3 andImageType:(int)arg4 andSport:(int)arg5 ;
+(id)sportNameForIndex:(int)arg1 ;
+(id)keywordOngletPourIndice:(int)arg1 ;
+(id)formatDateForPronosticsView:(id)arg1 ;
+(id)imageForDetailOfType:(long long)arg1 ;
+(id)getTomorrowDate;
+(id)truncateString:(id)arg1 withMaxLength:(long long)arg2 withEllipsis:(BOOL)arg3 ;
+(id)flattenHTML:(id)arg1 ;
+(id)attributedStringForString:(id)arg1 withMarker:(id)arg2 andColor:(id)arg3 ;
+(id)parseURLParams:(id)arg1 ;
@end
