/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AlienBlue/AlienBlue-Structs.h>
@interface HTMLNode : NSObject {

	xmlNode* _node;

}

@property (readonly) long long score; 
+(void)stripDocPointersFromAttr:(xmlAttr*)arg1 ;
+(void)recursiveStripDocPointersFromNode:(xmlNode*)arg1 ;
-(long long)storedAggregateScore;
-(long long)contentScore;
-(long long)tagScore;
-(long long)classWeightScore;
-(void)setStoredAggregateScore:(long long)arg1 ;
-(long long)siblingBonusWithOtherNode:(id)arg1 ;
-(double)linkDensity;
-(void)calculateAggregateScoreForParents;
-(BOOL)eligibleForAppendingToNode:(id)arg1 ;
-(long long)storedSiblingBonusScore;
-(void)setStoredSiblingBonusScore:(long long)arg1 ;
-(long long)score;
-(id)allChildrenRecursive;
-(void)detachChild:(id)arg1 ;
-(void)i_prettyLogWithIndent:(unsigned long long)arg1 ;
-(void)flushDetachedNode;
-(void)prettyLog;
-(void)setInteger:(long long)arg1 asXMLAttributeNamed:(id)arg2 ;
-(long long)integerFromXMLAttributeNamed:(id)arg1 ;
-(id)ident;
-(void)detach;
-(xmlNode*)xmlNode;
-(id)getAttributeNamed:(id)arg1 ;
-(id)findChildTags:(id)arg1 ;
-(id)findChildTag:(id)arg1 ;
-(id)initWithXMLNode:(xmlNode*)arg1 ;
-(void)findChildrenWithAttribute:(const char*)arg1 matchingName:(const char*)arg2 inXMLNode:(xmlNode*)arg3 inArray:(id)arg4 allowPartial:(BOOL)arg5 ;
-(void)findChildTags:(id)arg1 inXMLNode:(xmlNode*)arg2 inArray:(id)arg3 ;
-(id)findChildTag:(id)arg1 inXMLNode:(xmlNode*)arg2 ;
-(id)findChildWithAttribute:(const char*)arg1 matchingName:(const char*)arg2 inXMLNode:(xmlNode*)arg3 allowPartial:(BOOL)arg4 ;
-(id)findChildrenWithAttribute:(id)arg1 matchingName:(id)arg2 allowPartial:(BOOL)arg3 ;
-(void)appendChildContentsToString:(id)arg1 inNode:(xmlNode*)arg2 ;
-(id)findChildWithAttribute:(id)arg1 matchingName:(id)arg2 allowPartial:(BOOL)arg3 ;
-(id)findChildOfClass:(id)arg1 ;
-(id)findChildrenOfClass:(id)arg1 ;
-(int)nodetype;
-(id)allContents;
-(id)rawContents;
-(id)contents;
-(id)tagName;
-(id)firstChild;
-(id)previousSibling;
-(id)className;
-(id)nextSibling;
-(id)parent;
-(id)children;
@end

