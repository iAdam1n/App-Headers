/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAGimmickDataSourceItem.h>

@class NSString, WAGimmick;

@interface WAGimmickPickerItem : NSObject <WAGimmickDataSourceItem> {

	WAGimmick* _gimmick;
	NSString* _externalID;
	NSString* _shortcut;
	CGSize _displaySize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize displaySize;                  //@synthesize displaySize=_displaySize - In the implementation block
@property (nonatomic,readonly) NSString * externalID;               //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) NSString * shortcut;                 //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,readonly) WAGimmick * gimmick; 
-(WAGimmick *)gimmick;
-(id)initWithExternalID:(id)arg1 displaySize:(CGSize)arg2 shortcut:(id)arg3 ;
-(NSString *)shortcut;
-(NSString *)externalID;
-(CGSize)displaySize;
@end

