/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString;

@interface MNAttachmentShareTextViewModel : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _body;
	NSString* _attribution;

}

@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                     //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * attribution;              //@synthesize attribution=_attribution - In the implementation block
-(id)initWithTitle:(id)arg1 body:(id)arg2 attribution:(id)arg3 ;
-(NSString *)title;
-(NSString *)body;
-(NSString *)attribution;
@end

