/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WAVCard : NSObject {

	NSString* _contactName;
	NSString* _vCardString;

}

@property (nonatomic,copy) NSString * contactName;              //@synthesize contactName=_contactName - In the implementation block
@property (nonatomic,copy) NSString * vCardString;              //@synthesize vCardString=_vCardString - In the implementation block
+(id)mergedContactFromVCardString:(id)arg1 ;
+(id)selfVCard;
+(BOOL)isFieldNameForIMServiceValid:(id)arg1 ;
+(id)labelFromFieldDescriptions:(id)arg1 ;
+(BOOL)canShareInstantMessagingService:(id)arg1 ;
-(NSString *)vCardString;
-(void)setVCardString:(NSString *)arg1 ;
-(NSString *)contactName;
-(void)setContactName:(NSString *)arg1 ;
@end
