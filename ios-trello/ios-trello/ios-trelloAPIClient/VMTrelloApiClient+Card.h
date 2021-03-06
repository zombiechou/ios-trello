//
//  VMTrelloApiClient+Card.h
//  ios-trello
//
//  Created by Vince Mansel on 5/29/12.
//  Copyright (c) 2012 waveOcean Software. All rights reserved.
//

#import "VMTrelloApiClient.h"

/*
 card
 
 IMPLEMENTED:
 
 GET /1/cards/[card_id]
 GET /1/cards/[card_id]/list
 PUT /1/cards/[card_id]/desc
 POST /1/cards
 
 DELETE /1/cards/[card_id]

 PLANNED:

 GET /1/cards/[card_id]/[field]
 GET /1/cards/[card_id]/actions
 GET /1/cards/[card_id]/attachments
 GET /1/cards/[card_id]/board
 GET /1/cards/[card_id]/board/[field]
 GET /1/cards/[card_id]/checkItemStates
 GET /1/cards/[card_id]/checklists
 GET /1/cards/[card_id]/list/[field]
 GET /1/cards/[card_id]/members
 GET /1/cards/[card_id]/membersVoted
 PUT /1/cards/[card_id]
 PUT /1/cards/[card_id]/closed
 PUT /1/cards/[card_id]/due
 PUT /1/cards/[card_id]/idList
 PUT /1/cards/[card_id]/name
 PUT /1/cards/[card_id]/subscribed
 POST /1/cards/[card_id]/actions/comments
 POST /1/cards/[card_id]/attachments
 POST /1/cards/[card_id]/checklists
 POST /1/cards/[card_id]/labels
 POST /1/cards/[card_id]/members
 POST /1/cards/[card_id]/membersVoted
 DELETE /1/cards/[card_id]
 DELETE /1/cards/[card_id]/checklists/[idChecklist]
 DELETE /1/cards/[card_id]/labels/[color]
 DELETE /1/cards/[card_id]/members/[idMember]
 DELETE /1/cards/[card_id]/membersVoted/[idMember]
 
 */

@interface VMTrelloApiClient (Card)

// GET /1/cards/[card_id]
- (void)get1Cards:(NSString *)card_id success:(void (^)(id JSON))JSONSuccess_block;
- (void)get1Cards:(NSString *)card_id success:(void (^)(id JSON))JSONSuccess_block failure:(void (^)(NSError *error))failure;

//GET /1/cards/[card_id]/list
- (void)get1CardsList:(NSString *)card_id success:(void (^)(id JSON))JSONSuccess_block;
- (void)get1CardsList:(NSString *)card_id success:(void (^)(id JSON))JSONSuccess_block failure:(void (^)(NSError *error))failure;

//PUT /1/cards/[card_id]/desc
- (void)put1CardsDesc:(NSString *)card_id desc:(NSString *)desc success:(void (^)(id JSON))JSONSuccess_block;
- (void)put1CardsDesc:(NSString *)card_id desc:(NSString *)desc success:(void (^)(id JSON))JSONSuccess_block failure:(void (^)(NSError *error))failure;

//POST /1/cards
- (void)post1Cards:(NSString *)name idList:(NSString *)idList success:(void (^)(id JSON))JSONSuccess_block;
- (void)post1Cards:(NSString *)name idList:(NSString *)idList success:(void (^)(id JSON))JSONSuccess_block failure:(void (^)(NSError *error))failure;

//DELETE /1/cards/[card_id]
- (void)delete1Cards:(NSString *)card_id success:(void (^)(id JSON))JSONSuccess_block;
- (void)delete1Cards:(NSString *)card_id success:(void (^)(id JSON))JSONSuccess_block failure:(void (^)(NSError *error))failure;

@end
