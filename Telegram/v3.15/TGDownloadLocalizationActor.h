/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGActor.h>
#import <Telegram/TGRawHttpActor.h>

@class TGProgressWindow, NSString;

@interface TGDownloadLocalizationActor : TGActor <TGRawHttpActor> {

	TGProgressWindow* _progressWindow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)genericPath;
+(void)load;
-(void)httpRequestSuccess:(id)arg1 response:(id)arg2 ;
-(void)httpRequestFailed:(id)arg1 ;
-(void)dealloc;
-(void)execute:(id)arg1 ;
@end
