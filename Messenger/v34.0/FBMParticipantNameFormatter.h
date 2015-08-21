/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>

@class FBLanguageNameFormat, FBLanguageNameFormatFactory, NSString;

@interface FBMParticipantNameFormatter : NSObject <FBSessionClassProvidable> {

	FBLanguageNameFormat* _languageNameFormat;
	FBLanguageNameFormatFactory* _languageNameFormatFactory;

}

@property (nonatomic,retain) FBLanguageNameFormat * languageNameFormat;                            //@synthesize languageNameFormat=_languageNameFormat - In the implementation block
@property (nonatomic,retain) FBLanguageNameFormatFactory * languageNameFormatFactory;              //@synthesize languageNameFormatFactory=_languageNameFormatFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(FBLanguageNameFormat *)languageNameFormat;
-(id)initWithLanguageNameFormatFactory:(id)arg1 ;
-(id)_nameForUserWithName:(id)arg1 email:(id)arg2 ;
-(id)_shortNameForUserWithName:(id)arg1 firstName:(id)arg2 email:(id)arg3 ;
-(id)_namesForParticipants:(id)arg1 useFullName:(BOOL)arg2 ;
-(id)_namesForUsers:(id)arg1 useFullName:(BOOL)arg2 ;
-(id)_sizeLimtedJoinedStringForNames:(id)arg1 formatString:(id)arg2 maxNames:(unsigned long long)arg3 minNames:(unsigned long long)arg4 maxWidth:(double)arg5 font:(id)arg6 ;
-(id)_namesForContacts:(id)arg1 useFullName:(BOOL)arg2 ;
-(id)nameForConversationContact:(id)arg1 ;
-(id)shortNameForConversationContact:(id)arg1 ;
-(id)nameForParticipant:(id)arg1 ;
-(id)shortNameForParticipant:(id)arg1 ;
-(id)nameForUser:(id)arg1 ;
-(id)shortNameForUser:(id)arg1 ;
-(id)formatName:(id)arg1 ;
-(id)nameListForParticipants:(id)arg1 useFullName:(BOOL)arg2 truncateAt:(unsigned long long)arg3 ;
-(id)nameListForUsers:(id)arg1 useFullName:(BOOL)arg2 truncateAt:(unsigned long long)arg3 ;
-(id)nameListForParticipants:(id)arg1 formatString:(id)arg2 useFullName:(BOOL)arg3 maxNames:(unsigned long long)arg4 minNames:(unsigned long long)arg5 maxWidth:(double)arg6 font:(id)arg7 ;
-(id)nameListForUsers:(id)arg1 formatString:(id)arg2 useFullName:(BOOL)arg3 maxNames:(unsigned long long)arg4 minNames:(unsigned long long)arg5 maxWidth:(double)arg6 font:(id)arg7 ;
-(id)nameListForConversationContacts:(id)arg1 useFullName:(BOOL)arg2 truncateAt:(unsigned long long)arg3 ;
-(id)nameListForConversationContacts:(id)arg1 formatString:(id)arg2 useFullName:(BOOL)arg3 maxNames:(unsigned long long)arg4 minNames:(unsigned long long)arg5 maxWidth:(double)arg6 font:(id)arg7 ;
-(void)setLanguageNameFormat:(FBLanguageNameFormat *)arg1 ;
-(FBLanguageNameFormatFactory *)languageNameFormatFactory;
-(void)setLanguageNameFormatFactory:(FBLanguageNameFormatFactory *)arg1 ;
-(void)dealloc;
@end

