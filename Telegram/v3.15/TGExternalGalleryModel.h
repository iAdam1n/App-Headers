/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGModernGalleryModel.h>

@class TGWebPageMediaAttachment;

@interface TGExternalGalleryModel : TGModernGalleryModel {

	TGWebPageMediaAttachment* _webPage;

}
-(id)createDefaultLeftAccessoryView;
-(id)instagramShortcodeFromText:(id)arg1 ;
-(void)_saveImageDataToCameraRoll:(id)arg1 ;
-(void)_saveVideoToCameraRoll:(id)arg1 ;
-(id)initWithWebPage:(id)arg1 peerId:(long long)arg2 messageId:(int)arg3 ;
@end
